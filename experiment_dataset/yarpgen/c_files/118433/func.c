/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118433
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
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)39)), (min((((/* implicit */unsigned int) max(((unsigned short)24), ((unsigned short)65515)))), (((((/* implicit */_Bool) (unsigned short)65515)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))) ? (((67553994410557440ULL) + (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) var_15)))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_15))))) - (((/* implicit */int) var_16))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */int) var_7))))))) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24))) != (18446744073709551614ULL)))))));
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_15)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((min((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) | (var_19))))));
            var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) 18379190079298994157ULL))), ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                arr_9 [(unsigned short)8] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_0 - 1])) | (((/* implicit */int) arr_5 [i_0] [i_0 - 1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */short) (+(16140901064495857664ULL)));
                        arr_16 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
                        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32751))))) : (arr_4 [i_0] [i_0] [i_0 + 1])));
                    }
                    for (long long int i_5 = 4; i_5 < 17; i_5 += 1) 
                    {
                        arr_19 [(unsigned char)11] [i_2] [(unsigned char)11] [i_3] [i_0] = ((/* implicit */unsigned char) ((11747533300889583570ULL) % (arr_7 [i_5] [i_5 - 1] [i_5])));
                        arr_20 [i_0] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_4))))));
                    }
                    var_27 = ((/* implicit */int) (+(arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [(_Bool)1] [i_0 - 1])));
                }
                for (long long int i_6 = 4; i_6 < 15; i_6 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_7] [i_2] [i_6] [i_2] [i_2] |= ((/* implicit */unsigned long long int) arr_27 [i_2] [i_6 - 4] [i_6 - 1] [i_6 - 4] [i_6]);
                        var_29 = ((/* implicit */unsigned long long int) var_10);
                        var_30 = ((/* implicit */unsigned long long int) ((unsigned int) (short)32761));
                    }
                    var_31 = ((/* implicit */long long int) var_7);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) var_10)) : (var_18)));
                    var_33 = ((/* implicit */unsigned short) var_18);
                }
            }
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                arr_31 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) ((unsigned int) var_14))), (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18349418486257466720ULL))));
            }
            arr_32 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        }
        arr_33 [(short)14] [i_0 - 1] |= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (12556445303603610214ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 3) 
    {
        arr_37 [i_9] = ((((/* implicit */_Bool) ((18349418486257466702ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))))) ? (max((var_5), (((/* implicit */unsigned long long int) arr_0 [i_9 + 1] [i_9 + 1])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [(signed char)6] [12ULL] [i_9] [12ULL] [(short)16]))))));
        arr_38 [i_9] [i_9] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) - (13928987840226420556ULL)));
        var_35 = ((/* implicit */unsigned long long int) var_9);
        var_36 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((arr_24 [i_9] [i_9 + 1] [i_9 - 1] [i_9]), (((/* implicit */int) (signed char)-22))))), (((var_18) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
    }
    for (signed char i_10 = 1; i_10 < 21; i_10 += 2) 
    {
        var_37 = ((/* implicit */unsigned short) ((short) var_19));
        var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (var_15))))));
    }
    var_39 = ((/* implicit */short) var_17);
}
