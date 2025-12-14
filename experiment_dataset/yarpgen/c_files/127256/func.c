/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127256
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 = ((((arr_1 [i_1]) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) 0LL)))))) : ((+(arr_4 [i_1] [i_0]))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */short) var_6);
                        var_19 = ((/* implicit */short) max((((/* implicit */int) var_3)), ((+((-(((/* implicit */int) var_2))))))));
                        arr_10 [7U] [i_1] [8ULL] [i_3] = ((min((((/* implicit */long long int) arr_0 [i_1])), (arr_6 [i_0]))) != (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_2] [i_2] [i_2]))), (((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_0]))) : (2170802185U))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((1821752443593964651ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_1] [i_2])))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) ^ (var_16))))))));
                        var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [0U]))) * (4294967295U)))) != (var_13))));
                        var_22 = ((/* implicit */unsigned short) var_2);
                        arr_15 [i_4] [0ULL] [(unsigned char)3] [i_2] [7U] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) 0LL);
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16320))))) + ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0]))))))))))));
                                arr_20 [i_5] [i_2] [i_1] [7ULL] = ((/* implicit */int) max(((((+(-1))) <= (var_1))), (((((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))))) != (arr_12 [i_0])))));
                                var_25 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [i_2] [i_0])))))), (((short) arr_13 [(_Bool)1] [i_1] [i_1] [(_Bool)1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */int) ((2170802185U) - (((/* implicit */unsigned int) min((2147483626), (((/* implicit */int) ((-1LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)82)))))))))));
}
