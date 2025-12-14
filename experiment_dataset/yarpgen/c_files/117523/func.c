/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117523
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
    var_14 = ((/* implicit */unsigned short) min((var_9), (((/* implicit */long long int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)25)) != (((/* implicit */int) var_10)))))))))));
    var_15 = ((/* implicit */_Bool) var_7);
    var_16 |= ((/* implicit */signed char) -9223372036854775789LL);
    var_17 = ((/* implicit */unsigned int) min((min((max((((/* implicit */unsigned long long int) var_11)), (var_2))), (((/* implicit */unsigned long long int) -9223372036854775797LL)))), (((/* implicit */unsigned long long int) min((var_5), (max((var_5), (((/* implicit */unsigned short) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((1000642923) << (((((-9223372036854775789LL) + (9223372036854775792LL))) - (3LL)))))) != (min((3395986976790322290ULL), (((/* implicit */unsigned long long int) 21016268))))));
        arr_3 [(short)6] = ((/* implicit */_Bool) max((((var_2) >> (((((/* implicit */int) var_3)) - (16309))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
        {
            arr_6 [2] [(short)14] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_1])), (min((var_10), (var_0)))))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 1316292706U)) : (9223372036854775807LL))) : (((/* implicit */long long int) ((unsigned int) arr_4 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39524))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_2] [(unsigned char)4] [(unsigned short)14] = ((/* implicit */int) max((((/* implicit */long long int) max(((short)-30800), (((/* implicit */short) (_Bool)1))))), ((~(-1206540612906862556LL)))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_7)), (7086359330269123666LL))), ((~(arr_5 [i_1] [i_2] [i_3])))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_1)) < (max((((/* implicit */long long int) 1501022746)), (((arr_4 [i_5]) ? (arr_5 [i_0] [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_20 [(unsigned char)10] = ((/* implicit */short) ((((((/* implicit */int) arr_17 [i_5])) & (((/* implicit */int) arr_17 [i_0])))) / (((/* implicit */int) ((short) arr_17 [i_0])))));
            arr_21 [i_0] = (+(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0])))) >= (((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)12256)) : (((/* implicit */int) (unsigned short)17627))))))));
        }
        arr_22 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned short) (_Bool)0)), (arr_8 [i_0]))), (((/* implicit */unsigned short) arr_16 [i_0] [i_0])))))));
    }
}
