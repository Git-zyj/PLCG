/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135217
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + ((-(arr_0 [i_0 + 1])))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(arr_1 [i_0 + 1])));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_17 = 2341470160U;
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (+(((((/* implicit */long long int) arr_9 [i_1 - 1] [i_1 + 4] [i_1 + 4])) - (var_7)))));
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_19 *= ((/* implicit */short) max((((3285404363431017737LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) ((var_15) / (((/* implicit */unsigned int) arr_8 [i_1] [i_2] [i_3] [i_2])))))));
                        var_20 = ((/* implicit */short) var_14);
                        var_21 += ((/* implicit */unsigned int) (short)32767);
                        var_22 = ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (arr_10 [i_1 + 1]) : (arr_7 [i_1 + 3])))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(var_3))))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) max((arr_16 [i_2] [i_3] [i_2] [i_2]), (((/* implicit */long long int) var_9))))) ? (max((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_10 [7])))) : (max((((/* implicit */unsigned long long int) var_4)), (var_10))))) ^ (((/* implicit */unsigned long long int) min((arr_8 [i_3] [i_3] [i_3] [i_3]), (((((/* implicit */_Bool) 65528)) ? (arr_8 [i_1] [i_1] [i_1] [i_5]) : (((/* implicit */int) arr_12 [(_Bool)1] [i_2] [i_1 + 3]))))))))))));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_1] [i_2] [(_Bool)1] [i_5 - 1] [i_5 - 1] [9U] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1585467839507255595LL)), (10714743584918971350ULL)));
                            var_25 = ((/* implicit */long long int) ((unsigned int) arr_10 [i_6 + 3]));
                        }
                        for (long long int i_7 = 1; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_1] [i_2] [i_3] [i_5] [i_7 + 1] = ((/* implicit */unsigned int) (unsigned char)81);
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(17960510373416282962ULL))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1] [0] [i_5 - 1])) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) arr_17 [i_5] [i_5 - 1] [i_5 - 1] [12ULL] [i_5 - 1]))))) / (max((arr_10 [i_7 + 1]), (var_15)))));
                            var_28 += (((~(((unsigned int) var_11)))) | ((~(var_15))));
                        }
                        for (long long int i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            arr_28 [i_1] [i_1] [i_1 + 4] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) -1498076360)) | (1478244254U))) | (arr_23 [i_1] [i_1 + 1] [17LL] [i_1] [i_1])));
                            var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4398046511103LL)) | (((12626980752959441774ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_3] [i_3])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28217))) : ((~(((((/* implicit */_Bool) arr_8 [i_8 + 1] [16] [i_3] [14U])) ? (var_10) : (((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [i_5] [i_2]))))))));
                            var_30 |= ((/* implicit */int) var_9);
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_4 [(short)10] [i_5 - 1]))));
                        }
                        var_32 = ((/* implicit */unsigned char) var_6);
                        var_33 &= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_3 [i_5 - 1])), (((((/* implicit */unsigned long long int) 4814646026644805347LL)) / (16115670586449089627ULL))))), (((/* implicit */unsigned long long int) ((-1767089680) + (((((/* implicit */_Bool) arr_22 [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_27 [i_3] [i_3])) : (((/* implicit */int) (unsigned char)243)))))))));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */short) min(((~(arr_24 [i_1 + 3] [i_1 + 1] [i_1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_24 [i_1 + 1] [i_1 + 1] [i_1] [i_1])) ? (arr_24 [i_1] [i_1] [i_1] [22LL]) : (arr_24 [i_1 - 1] [20] [i_1 + 4] [i_1])))));
        var_35 *= 4294967283U;
    }
}
