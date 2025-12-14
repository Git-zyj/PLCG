/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137257
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1619223877)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) arr_1 [i_1] [i_0])))) + ((((-(1948362492))) + (((((/* implicit */_Bool) (signed char)-66)) ? (var_6) : (((/* implicit */int) arr_2 [i_1] [i_0]))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    var_17 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                    var_18 = ((long long int) ((((/* implicit */_Bool) arr_8 [i_0])) || (((/* implicit */_Bool) ((long long int) -1731464911)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-8385621975440237239LL) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3])))))) ? (((/* implicit */int) ((unsigned char) (signed char)-66))) : (((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned char)13])) && (((/* implicit */_Bool) arr_15 [i_0] [i_1] [(unsigned char)13] [(unsigned char)13] [i_1]))));
                                arr_17 [i_0] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_5] [8] [i_3])) ? (arr_7 [i_0] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3] [(short)13] [i_0])) ? (var_4) : (((/* implicit */unsigned int) -1948362508)))))));
                            }
                        } 
                    } 
                    var_21 = arr_15 [i_0] [i_0] [0LL] [i_0] [10];
                }
                var_22 = min((((/* implicit */unsigned short) ((unsigned char) var_9))), (var_8));
                /* LoopSeq 1 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(short)8] [i_1] [i_6 - 1] [i_1] [i_0]))) : (((17333017226420997107ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67)))))))));
                    var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_9)))), ((-((+(((/* implicit */int) (short)-28390))))))));
                    arr_21 [i_0] = ((/* implicit */int) max((min((288230371856744448LL), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) max(((short)32625), (((/* implicit */short) (!(((/* implicit */_Bool) -288230371856744448LL))))))))));
                }
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((unsigned char) var_4));
                            arr_26 [i_1] = ((/* implicit */signed char) ((int) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_8]))) : (arr_16 [i_1] [i_7] [i_1] [i_1]))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1019010165U)) ? (((/* implicit */int) (short)-19708)) : (558558319)))) == (((((/* implicit */_Bool) ((long long int) 2147483647))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2524978533U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        {
                            arr_40 [i_9] = ((/* implicit */short) min((arr_30 [(signed char)6] [(signed char)6]), (((/* implicit */unsigned long long int) arr_38 [i_9] [i_9] [i_9] [i_9] [i_9]))));
                            var_27 = ((/* implicit */_Bool) 181180237);
                            /* LoopSeq 1 */
                            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                            {
                                var_28 *= ((/* implicit */unsigned long long int) (~((~(arr_32 [i_9])))));
                                arr_43 [i_9] [i_10] [i_10] [i_11] [i_13] [i_11] = ((/* implicit */unsigned char) var_4);
                                var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_42 [(short)20] [(short)20] [i_11] [i_12] [i_11] [(short)20] [i_13])) ? (((/* implicit */int) (short)28361)) : (((/* implicit */int) var_3)))))) % (-5654615602655098140LL)));
                            }
                            arr_44 [i_11] [i_12] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_35 [i_10] [i_11]), ((signed char)-66))))) : (min((((/* implicit */unsigned long long int) var_13)), (10915619477738319827ULL))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        for (short i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            {
                                arr_52 [12] [i_14] [i_14] [i_14] [i_15] [i_15] [12U] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_9) && (((/* implicit */_Bool) (unsigned char)228))))), (3136807007U)));
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_15] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)74)))))) : (70368743129088LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_31 [i_16] [i_14] [i_10])) ? (max((arr_47 [i_9] [i_10]), (((/* implicit */long long int) arr_29 [i_9] [4])))) : (((/* implicit */long long int) ((arr_34 [i_9] [0U] [i_9] [i_9]) + (((/* implicit */unsigned int) var_5)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */short) var_2);
                                arr_60 [i_9] [i_10] [i_14] [10U] [i_18] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((long long int) var_10))) : (max((460744736777582547ULL), (((/* implicit */unsigned long long int) arr_42 [i_9] [i_9] [i_14] [i_14] [i_18] [i_14] [i_18])))))));
                                var_32 |= 6421182752850551264LL;
                                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((unsigned int) arr_34 [i_9] [i_10] [i_10] [i_17]))))))))));
                            }
                        } 
                    } 
                    arr_61 [i_9] [i_10] [i_14] = ((/* implicit */unsigned char) ((int) (~(-699177952438802612LL))));
                }
            }
        } 
    } 
}
