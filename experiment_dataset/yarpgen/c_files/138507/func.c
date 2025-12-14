/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138507
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) + (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)112))))) ? (((((/* implicit */_Bool) (signed char)40)) ? (var_4) : (((/* implicit */long long int) 282820135)))) : ((~(var_6)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0 - 1] [i_0] [i_1] [i_2 - 1] = ((/* implicit */_Bool) (~(var_1)));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */short) (unsigned char)144);
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 268435455U)))))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0 - 2] = ((/* implicit */int) var_0);
                            var_22 = ((/* implicit */short) 8876927811389548269LL);
                        }
                        for (int i_5 = 3; i_5 < 17; i_5 += 3) 
                        {
                            arr_17 [i_1 - 1] [i_0] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                            arr_18 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((var_7) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))))))) + (max((((((/* implicit */_Bool) -1474111872)) ? (arr_5 [i_2 + 1]) : (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (0)))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) min((var_8), (var_5))))));
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_21 [(short)17] [(short)17] [i_2] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)15)) + (((/* implicit */int) (_Bool)1)))))) == ((-(((/* implicit */int) arr_16 [i_3] [i_3] [i_2] [i_1 - 1] [i_6] [i_2] [i_0]))))));
                            var_24 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1065353216U)) ? (((/* implicit */int) var_15)) : (491520))) << (((((/* implicit */int) max(((short)-6794), (var_8)))) - (31965)))))) ? (((/* implicit */int) (_Bool)0)) : ((-(491520))));
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_18) == (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) << (((var_10) - (1493243179)))))))))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [(_Bool)1] [i_6] [i_2] [i_0] [13LL] [i_0])) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (unsigned char)52))))), (var_14)))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [i_1 + 3] [i_2] [i_0] [i_7])) ? (((/* implicit */int) arr_12 [(unsigned char)1] [8LL] [i_1 - 1])) : (((/* implicit */int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) + (var_1)));
                        var_28 = ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_1] [i_2] [(_Bool)1]);
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_7] [8LL] [i_0 - 1] [i_2]))))))))));
                    }
                }
            } 
        } 
    } 
}
