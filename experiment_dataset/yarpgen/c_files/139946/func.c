/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139946
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
    var_15 = ((/* implicit */unsigned char) ((long long int) var_2));
    var_16 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62040)) - (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))));
        arr_5 [8LL] [8LL] &= ((/* implicit */long long int) ((short) min((arr_3 [8ULL] [i_0 - 1]), (arr_3 [(_Bool)1] [i_0 + 2]))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) > (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 4])) ? (var_3) : (((/* implicit */unsigned int) 993015522))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        arr_11 [(unsigned char)0] = ((/* implicit */signed char) (unsigned short)62040);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_18 [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1 - 2])) ? (max((13296988471007859069ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_1] [i_3])) + (-536870912)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1152921504606846975LL))))))));
                    arr_19 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_15 [i_3] [i_1]);
                    arr_20 [i_1] [i_3] [i_3] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)213))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        arr_25 [i_3] [i_2] [i_2] [i_2] = ((long long int) arr_23 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2]);
                        arr_26 [(unsigned char)20] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_1 - 2]), (((/* implicit */unsigned char) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))))) ? (((((/* implicit */int) ((5713944885472763364ULL) >= (3404928846725067486ULL)))) * ((+(((/* implicit */int) arr_9 [i_1] [i_2])))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((var_1) * (((/* implicit */int) arr_17 [i_4] [i_1])))))))));
                    }
                    arr_27 [i_3] [i_3] = ((/* implicit */unsigned short) arr_24 [i_1] [13] [i_3]);
                }
            } 
        } 
        arr_28 [18] = ((max((((/* implicit */unsigned long long int) ((2338533246U) ^ (((/* implicit */unsigned int) 1977426317))))), (var_2))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        arr_36 [i_1] [i_5] [i_1] [i_1] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_10 [i_6 + 3]))), (((/* implicit */unsigned long long int) (((_Bool)0) || (((/* implicit */_Bool) arr_9 [i_1] [i_5]))))))))));
                        arr_37 [i_1] [i_7] [i_6] [i_5] [i_1] = ((/* implicit */short) max((((((/* implicit */int) arr_8 [i_1])) >= (((/* implicit */int) min(((unsigned char)61), ((unsigned char)12)))))), (((((/* implicit */_Bool) ((arr_23 [i_1] [i_1] [i_6] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_5]))) : (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_1])) ? (196608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6 + 1] [i_6 + 1]))))))))));
                    }
                } 
            } 
        } 
    }
}
