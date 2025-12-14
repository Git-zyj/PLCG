/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121607
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
    var_14 = ((/* implicit */unsigned int) (signed char)-47);
    var_15 = ((/* implicit */_Bool) 3388408635U);
    var_16 += min(((+(var_1))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) var_6)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [21U] = ((unsigned int) (unsigned char)241);
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-47)), (((unsigned int) arr_3 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-61)))))) | (min((arr_10 [i_1] [i_2]), (((/* implicit */long long int) (-2147483647 - 1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (555496478760379360ULL)))) ? (((/* implicit */int) ((short) arr_6 [i_2]))) : ((~(((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */int) ((_Bool) max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0])), (var_0))))) : (((/* implicit */int) (signed char)-47)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) arr_15 [(signed char)5] [(signed char)2] [i_2] [i_3] [i_4])) : ((-(-1130377452)))));
                            var_20 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                            var_21 = ((/* implicit */unsigned int) ((((var_13) ? (arr_3 [i_3]) : (((/* implicit */unsigned int) 1130377452)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)64))))))));
                        }
                    }
                    arr_16 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] = ((/* implicit */long long int) (((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))) % (((((/* implicit */int) ((_Bool) (unsigned char)8))) ^ (var_6)))));
                    arr_17 [i_0] [(short)15] [13U] = min((arr_2 [i_1] [i_2]), (arr_2 [i_0 - 1] [i_1]));
                }
            } 
        } 
    }
    for (short i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_22 [i_5 - 1])), ((-(1162356244U)))));
            arr_26 [i_5] [(signed char)8] [i_6] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) (unsigned char)0)) : (arr_1 [i_5]))), ((-(var_8))))) > (((/* implicit */int) ((((/* implicit */_Bool) ((-5150182243160138634LL) | (((/* implicit */long long int) 2147483647))))) || (arr_8 [i_5] [i_5 - 1] [(unsigned char)21]))))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                arr_29 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */long long int) min((-1057341460), (((/* implicit */int) (_Bool)1))))) / (min((-5150182243160138629LL), (((/* implicit */long long int) (_Bool)1)))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) (+(3360102357U))))))));
                var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_14 [i_6] [i_7]))) >= (((/* implicit */int) ((5150182243160138633LL) != (((/* implicit */long long int) var_8)))))))), ((unsigned char)166)));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    var_24 = ((/* implicit */signed char) arr_9 [i_9]);
                    arr_36 [(_Bool)1] [i_6] [i_8] [i_9] [i_8] [(_Bool)1] = (((+(arr_30 [i_5 + 1]))) <= (arr_30 [i_5 - 2]));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)20825)) : (-1130377456)));
                }
                var_26 = ((/* implicit */unsigned short) max((arr_22 [8U]), (((/* implicit */signed char) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    for (unsigned int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        {
                            arr_43 [i_8] = (signed char)81;
                            var_27 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_4)))));
                            arr_44 [i_5] [i_6] [i_8] [i_10 + 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5] [(unsigned char)0] [i_5]))) ^ (16777216U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)95))))) : (arr_3 [i_5 - 2])))) + (((((/* implicit */_Bool) arr_32 [i_5] [i_5] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1792927666)) && (((/* implicit */_Bool) var_10)))))) : (506505667154131143LL)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)94)) / (((/* implicit */int) arr_6 [i_5 + 1])))) / (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_6 [i_5 + 1]))))));
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((long long int) min((((/* implicit */int) arr_48 [16LL] [i_12] [i_6] [i_5])), (var_8)))))));
                        var_30 -= min((arr_46 [i_6] [i_6] [i_12]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_13] [i_5 + 1] [i_6] [i_6] [i_5 + 1])) / ((~(1792927665)))))));
                        arr_52 [i_13] [i_12] [i_6] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_51 [i_5 + 1] [i_6] [i_6] [5ULL] [i_13]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25940)) ? (3360102357U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4)))))) : (arr_9 [i_5 - 1]))))));
                    }
                } 
            } 
            arr_53 [i_6] [15LL] [(signed char)16] = arr_3 [i_5];
        }
        for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            var_31 *= ((unsigned int) ((signed char) (short)32754));
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_35 [i_5] [(_Bool)1] [i_5 - 2] [i_14] [i_14] [i_14])))) ? (max((arr_35 [i_5 - 2] [i_5 - 2] [i_5 - 2] [(unsigned char)19] [8] [i_5 - 2]), (arr_35 [i_5] [i_5] [i_5 - 2] [i_14] [i_14] [4LL]))) : (arr_35 [i_5] [i_5] [i_5 - 2] [i_5] [i_14] [i_14])));
        }
        var_33 = ((/* implicit */_Bool) (+(arr_57 [i_5 - 2] [i_5 - 1])));
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                var_34 = ((/* implicit */unsigned char) (((~((~(arr_57 [i_16] [i_15]))))) << (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_16]))) % (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_12 [(short)2] [i_5])))))));
                var_35 = ((/* implicit */int) (_Bool)1);
            }
            arr_63 [i_5] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 60)) || ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0)))))))) && (((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5 - 2] [i_5]))));
        }
        arr_64 [i_5] [i_5] = ((18446744073709551613ULL) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)38))))));
    }
    var_36 += ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))));
}
