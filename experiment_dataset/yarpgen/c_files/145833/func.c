/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145833
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
    var_19 = max((var_14), (var_6));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_1 [i_1] [i_1])))) >= (((((/* implicit */int) arr_1 [i_0] [i_3])) << (((var_15) + (3494852110959667562LL)))))));
                        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_6 [i_0] [i_2] [i_3]), (arr_6 [i_0] [i_2] [i_3]))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 21; i_4 += 3) /* same iter space */
                        {
                            arr_12 [9LL] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_7 [i_2]);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_3] [i_2]), (((/* implicit */short) ((((/* implicit */_Bool) max((7ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) var_18)))))))))))));
                            var_23 += ((/* implicit */_Bool) min((3652805422559188681LL), (((/* implicit */long long int) 7))));
                            var_24 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6677203218169244799LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) : (-6677203218169244795LL)))) || (((/* implicit */_Bool) var_4)))))) | (max((((/* implicit */unsigned long long int) (+(arr_10 [i_1] [i_1] [i_2] [i_3] [6LL] [(short)2])))), (max((arr_5 [i_1] [i_1]), (var_14)))))));
                            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_3), (((/* implicit */short) var_8))))), (var_9)))) / (min((arr_10 [i_4 - 1] [i_4 + 2] [i_3] [i_3] [i_4 - 1] [i_2]), (max((-6677203218169244802LL), (((/* implicit */long long int) var_16))))))));
                        }
                        for (short i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_2] [(_Bool)1] [i_5] = ((/* implicit */long long int) arr_15 [i_2] [14LL] [16LL] [(short)18]);
                            var_26 = ((/* implicit */_Bool) var_18);
                            arr_18 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)67))))) ? (((var_0) * (var_14))) : (((((/* implicit */_Bool) (short)3584)) ? (12486909477212968343ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3565)))))))) ? (((/* implicit */int) min((((short) var_18)), (((/* implicit */short) var_16))))) : (((/* implicit */int) var_13))));
                        }
                        for (short i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_0] [17ULL] [i_3] [i_3] [i_2] [15ULL] = ((/* implicit */unsigned long long int) var_17);
                            arr_23 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_16 [i_0] [i_1] [i_2] [i_0] [i_0] [13LL]), (var_3)));
                            var_27 = ((/* implicit */short) ((((arr_3 [i_6 + 3]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3573))))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        arr_27 [2U] [i_7] [i_7] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_0] [i_1] [i_7] [i_2] [20LL]))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)147)))) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) var_0)) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_7] [i_2] [i_7])) ? (((/* implicit */int) arr_14 [i_7] [(unsigned short)9] [i_1] [(unsigned short)18] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_7]))))))))) : ((-(max((((/* implicit */long long int) var_2)), (6677203218169244795LL)))))));
                        arr_28 [i_2] = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((var_6) | (var_4))))), (((/* implicit */unsigned long long int) (+(1166880211U))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_8))));
                    }
                    var_29 -= ((/* implicit */short) max(((~(6677203218169244796LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_15 [(signed char)12] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_15 [16U] [i_1] [i_1] [i_1])))))));
                    var_30 = ((/* implicit */short) ((signed char) max((var_18), (((/* implicit */unsigned int) var_8)))));
                    arr_29 [i_2] = ((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) 6677203218169244821LL))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_17)));
    var_32 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) ((var_4) == (var_0))))))));
}
