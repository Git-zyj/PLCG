/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156151
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4981773988882064091LL))))), ((unsigned char)255))));
        arr_4 [i_0] = ((/* implicit */int) arr_0 [i_0 - 1] [(unsigned short)5]);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) | (((/* implicit */int) ((signed char) 18414438413612424890ULL)))))) ? (((unsigned long long int) arr_2 [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(-6990483611607599767LL))))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_1), (arr_8 [9])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))) ? (((int) max((arr_6 [10U] [i_1]), (((/* implicit */short) arr_2 [i_1]))))) : (((/* implicit */int) arr_8 [6])))))));
        var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 8779184804222666468LL))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_1])), (var_1)))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11180))))))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_4])) << (((((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [19LL] [i_3] [i_2])) : (((/* implicit */int) arr_14 [i_2] [i_3] [i_4])))) - (22877)))))) ? (((/* implicit */long long int) (+(1332250273)))) : (((((/* implicit */_Bool) (unsigned short)6891)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11180))) : (-5311832810264796150LL)))));
                    arr_15 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((short) (unsigned short)112)), ((short)11180)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_19 [i_5] [i_5] [i_4] [i_5] [14ULL] [0]))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_5])) ? (arr_10 [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned int) var_10)), (4074117346U)))))));
                                arr_21 [i_2] [i_3] [i_4] [i_3] [i_6] = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned int) max((arr_17 [i_3] [i_5] [i_4]), (((/* implicit */short) ((unsigned char) -846918150))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (-9154685012223670031LL)))))));
                }
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (short)-8367))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) (unsigned char)170)), ((short)30057)))) != (arr_11 [i_2] [(_Bool)1]))) ? (((/* implicit */int) arr_14 [i_2] [(short)20] [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) arr_16 [i_2] [i_3] [(unsigned char)6] [i_3] [i_2])) - (43787)))))) && (((/* implicit */_Bool) ((int) var_4)))))))))));
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_3] [i_3] [i_3]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) -2048LL);
    var_23 = ((/* implicit */short) ((unsigned char) var_8));
}
