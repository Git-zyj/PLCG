/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109077
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (17622636448856960361ULL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_10 [(_Bool)1] [i_1] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)3)))))), (min((((/* implicit */int) arr_4 [(short)2] [(short)2] [(short)2])), ((((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_11 [i_0 - 1] [10LL] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [12] [i_0 - 2])) | (max((2147483647), (((/* implicit */int) (unsigned char)26))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57147)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37282))))));
                    var_11 = ((/* implicit */unsigned long long int) (unsigned short)28242);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [(unsigned char)4] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */unsigned int) ((arr_13 [i_2] [i_2] [i_4 + 4] [i_2] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28253)))));
                                var_12 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)47)) ? (11258917357877682797ULL) : (((/* implicit */unsigned long long int) arr_14 [i_0 - 3] [14LL] [i_0] [i_0] [i_0] [i_0 - 2])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4 + 1])) != (((/* implicit */int) arr_1 [i_4 - 1])))))));
                                arr_17 [i_0] [4LL] [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                                var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [i_4] [i_3] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? ((~(-5))) : (((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) (_Bool)1))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17664)))))))) && (((/* implicit */_Bool) (short)-4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 = ((/* implicit */long long int) var_3);
}
