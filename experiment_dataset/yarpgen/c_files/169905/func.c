/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169905
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
        var_16 = ((/* implicit */unsigned char) (-((+(arr_1 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                {
                    var_17 = (short)-20797;
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2] [i_2])) ? (((unsigned long long int) (unsigned short)29989)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)191)))))))));
                                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) ((_Bool) var_0))), (max((((/* implicit */signed char) var_0)), (var_13)))))) == (((int) arr_11 [i_4] [i_2] [i_4] [i_2]))));
                                arr_17 [i_5] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_3 + 1]))) - (var_5))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_1] [4] [4] [i_4] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) 808729174U))))))));
                                arr_18 [i_5] [i_1] [i_3] [(signed char)0] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) var_8);
                                arr_19 [i_5] [i_1] [i_3 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))))));
                            }
                        } 
                    } 
                    arr_20 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)17383)), (-555397310)))), (((unsigned int) arr_4 [i_1] [i_1]))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((long long int) (+(var_8))));
    }
    var_20 = ((/* implicit */unsigned char) var_6);
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) var_10)))))));
}
