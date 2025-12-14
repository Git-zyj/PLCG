/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102620
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-110)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -132294121)) ? (-132294113) : (((/* implicit */int) (_Bool)1))))) ? (-498760885) : (-423526620))) : (((/* implicit */int) (unsigned short)29499))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((132294107) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-498760884)))) ? (((((/* implicit */_Bool) 4021308974U)) ? (((/* implicit */long long int) var_17)) : (arr_2 [i_0]))) : (arr_2 [i_0])));
                var_23 += ((/* implicit */unsigned int) ((int) ((short) 8585501819626943234ULL)));
                arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 3])) : (((/* implicit */int) arr_7 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2]))));
                var_24 = ((/* implicit */long long int) var_11);
            }
        }
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)0)) ? (2455347645U) : (((/* implicit */unsigned int) -1827714455)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_2 [i_0]))))));
            var_25 = min((max((arr_6 [(_Bool)1] [(_Bool)1] [i_0]), (arr_6 [i_0] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -498760893)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (arr_5 [i_0] [i_3] [i_3] [i_3])))));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((unsigned long long int) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) var_6))))))));
            arr_15 [i_0] [(signed char)12] [(signed char)12] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((int) var_7))))), (((((/* implicit */_Bool) 349065366U)) ? (12849727263533401721ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4021308994U)) ? (7224396770460309024LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            arr_16 [i_0] = ((/* implicit */signed char) (~(((unsigned int) ((long long int) var_1)))));
        }
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)60191)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((~(min((arr_11 [i_0]), (((/* implicit */long long int) var_1))))))));
        arr_17 [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]);
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_8))) || (((/* implicit */_Bool) var_0))));
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (_Bool)0)), (var_9))), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */unsigned long long int) ((var_5) % (((/* implicit */long long int) var_12))))) : ((~(((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))) : (var_8)))))));
}
