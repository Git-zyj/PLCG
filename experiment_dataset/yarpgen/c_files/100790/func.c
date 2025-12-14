/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100790
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)8)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || ((_Bool)1))))))) > (((((/* implicit */_Bool) (-(1499264249)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1380004129))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) (+(-6722651949292058512LL)))) ? ((~(((arr_0 [i_0]) | (arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) var_11);
        var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) > (1067721673U))) ? (((/* implicit */int) (unsigned char)159)) : (-397627838)));
        var_17 = ((/* implicit */signed char) max(((~(arr_1 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (4035225266123964416LL)))) ? (((((/* implicit */unsigned int) var_12)) ^ (3227245622U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))))))));
    }
    var_18 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((short) var_6))))) * (((/* implicit */int) ((((/* implicit */int) var_2)) == (var_11))))));
    var_19 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        arr_15 [i_2] = ((/* implicit */signed char) var_13);
                        arr_16 [i_5 - 1] [i_2] [11U] [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_4]))));
                        arr_17 [i_2] [i_2] [i_4] [(unsigned char)9] = ((/* implicit */int) arr_11 [(unsigned char)8] [(unsigned char)5] [i_4] [1]);
                        arr_18 [i_2] [i_2] [i_2] [i_3] [i_2] [(unsigned short)5] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)10] [i_4] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_11 [i_5] [2] [i_3] [(_Bool)1])))))) || ((!(((/* implicit */_Bool) arr_9 [i_2])))));
                    }
                    for (int i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) max((arr_9 [i_2]), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
                        var_21 ^= (!((_Bool)1));
                    }
                    var_22 *= ((/* implicit */unsigned short) ((var_8) | (var_12)));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)107)))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 1; i_8 < 12; i_8 += 4) 
                        {
                            arr_28 [i_2] [i_2] [i_2] [i_7] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (((~(-1338243183))) % (var_12))))));
                            arr_29 [i_2] [i_2] [0U] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~((+(max((arr_21 [i_7] [i_4]), (((/* implicit */int) var_4))))))));
                        }
                    }
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_8 [i_3] [i_3]))));
                }
            } 
        } 
    } 
}
