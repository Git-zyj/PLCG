/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184757
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) var_3);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) arr_0 [i_1] [(unsigned short)3]);
                            var_18 = ((/* implicit */unsigned int) ((var_0) != (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 3; i_4 < 18; i_4 += 2) /* same iter space */
                            {
                                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2] [i_1] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_3])))) : (((/* implicit */int) arr_4 [15U] [i_1] [15U]))));
                                var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) < (((arr_4 [i_0] [(signed char)15] [i_2]) ? (arr_3 [4ULL] [i_1] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((var_4) - (3269841990U))))))))));
                                var_21 = ((/* implicit */unsigned short) (((((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)20965)) : (((/* implicit */int) var_2)))))) + (2147483647))) >> (((var_10) + (85288179)))));
                            }
                            for (signed char i_5 = 3; i_5 < 18; i_5 += 2) /* same iter space */
                            {
                                arr_13 [9ULL] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((unsigned long long int) var_9)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))))) << (((max((max((((/* implicit */unsigned long long int) var_3)), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20947)) >= (((/* implicit */int) var_8))))))) - (18446744073709534799ULL)))));
                                var_22 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) var_11)), (((((/* implicit */int) arr_9 [i_3] [i_3] [i_2] [i_1] [i_3])) ^ (((/* implicit */int) (signed char)-74))))))), (arr_3 [i_0] [(unsigned short)5] [i_2])));
                            }
                            for (signed char i_6 = 3; i_6 < 18; i_6 += 2) /* same iter space */
                            {
                                arr_16 [i_3] |= ((/* implicit */unsigned long long int) ((((arr_0 [i_6 - 3] [i_6 - 3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6 - 1] [i_1] [i_6 - 1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6 - 2] [i_2] [i_2]))) - (arr_3 [i_6 - 3] [i_6 - 3] [i_6 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_6 - 2] [13U] [i_6 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_6 + 1] [i_1] [i_6])))))));
                                var_23 &= ((/* implicit */signed char) max((((/* implicit */int) (signed char)3)), (((((/* implicit */_Bool) (short)20965)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_0] [4]))))));
                                var_24 = ((/* implicit */int) max((arr_11 [(_Bool)1] [i_1] [i_1] [(signed char)12] [i_1] [i_1] [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)50)), (var_8)))) || (((/* implicit */_Bool) (unsigned short)47457)))))));
                                var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_3]))));
                                arr_17 [(signed char)17] [i_6] [i_2] = 147020846;
                            }
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) arr_6 [i_0] [(unsigned short)1] [(unsigned short)1] [i_1]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_9 = 1; i_9 < 16; i_9 += 4) 
                            {
                                arr_24 [(unsigned char)11] [i_9] [i_7] [i_8] [i_9] [(signed char)15] [i_8] = ((/* implicit */long long int) arr_11 [8ULL] [i_0] [i_8] [i_7] [(short)8] [i_0] [i_0]);
                                arr_25 [i_0] [i_9] [i_0] [(unsigned char)4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [2U] [(unsigned short)5] [(unsigned short)5] [(short)14])) + (2147483647))) >> (((var_5) - (16586538653393566777ULL))))))))), (((((/* implicit */_Bool) max((arr_2 [i_9 + 1] [i_9]), ((signed char)-1)))) ? ((-(((/* implicit */int) (short)26428)))) : (max((-147020846), (((/* implicit */int) arr_14 [i_9 + 1] [i_7] [i_1] [i_0]))))))));
                                arr_26 [i_0] [10] [(signed char)18] [i_8] [i_9] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)15416)), (973727197U)))))), ((_Bool)1)));
                            }
                            arr_27 [i_0] [16U] [16U] [i_8] = ((/* implicit */short) arr_5 [i_8] [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) max((2339529041U), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24169))) : (193287873655925736LL)));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) ((short) (signed char)-2)))));
}
