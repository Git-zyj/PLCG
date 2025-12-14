/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181898
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
    for (short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_1] [i_0 - 3])) && (((/* implicit */_Bool) arr_1 [i_1] [i_1])))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -356584573)) || (((/* implicit */_Bool) 591520812570371866ULL))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [13ULL] = ((/* implicit */unsigned char) ((signed char) (+(arr_7 [i_0] [i_0 + 2] [i_0 - 2]))));
                    arr_9 [i_2] = ((/* implicit */int) ((arr_0 [7U]) > (((long long int) 7326314415401659406ULL))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_11 [i_3] [i_3] [i_3] [12U]))));
                    var_17 = ((/* implicit */_Bool) (~(((long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned long long int) 356584572)) : (arr_1 [(_Bool)1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (signed char)0))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_13 [i_4] [15LL] [i_1] [(_Bool)1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57232))) : (9223372036854775807LL)))) : (((unsigned long long int) (unsigned short)57232))));
                        arr_17 [i_4] [i_3] [i_0] [i_0] = arr_15 [(_Bool)1] [(unsigned short)14] [(unsigned short)14] [i_4] [i_4];
                        var_19 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_0 - 3] [14LL]))))));
                        arr_18 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_4] = (!(((/* implicit */_Bool) (-(15567117356609010322ULL)))));
                        arr_19 [i_4] [4LL] [i_3] [i_4] = ((/* implicit */short) ((unsigned short) ((unsigned int) (!(((/* implicit */_Bool) 356584575))))));
                    }
                }
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_16 [i_0 - 3])))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) 639825133U))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) ((signed char) var_6)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)182)) | (356584575)))))) : (((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((4025374105331649086ULL) / (((/* implicit */unsigned long long int) 16777215LL))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 19; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            {
                arr_24 [i_5] [i_6] = ((/* implicit */long long int) ((signed char) (~(((unsigned long long int) (signed char)0)))));
                var_23 = (-(((unsigned long long int) arr_20 [17ULL])));
            }
        } 
    } 
}
