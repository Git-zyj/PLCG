/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131763
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
    var_20 = ((/* implicit */unsigned int) 14293337399095388053ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) | (((/* implicit */unsigned int) -1283932237))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4153406674614163563ULL)) ? (arr_0 [i_0]) : (arr_2 [i_0])))) : (610416928121655509LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((short) arr_2 [(short)4]));
        var_21 = ((/* implicit */long long int) arr_0 [i_0]);
        var_22 &= ((/* implicit */_Bool) (~(65535LL)));
        var_23 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) -1283932246)) | (14293337399095388052ULL))) | (arr_5 [i_1])));
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) != (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) -2259759877155554935LL)) : (arr_5 [i_1])))))));
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) <= (arr_5 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) (+(arr_1 [i_1])))) ^ (arr_5 [i_1])))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_15 [i_2] = ((/* implicit */int) arr_2 [i_2]);
            var_25 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_6 [12U] [i_1])) <= (arr_5 [i_2])))), (((((/* implicit */_Bool) ((unsigned long long int) 1445848361))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_1 [i_1]) : (arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1])))))));
            var_26 = (i_2 % 2 == 0) ? (((max((((/* implicit */long long int) -113920834)), (arr_11 [i_2]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) 1665213644)) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) && (((/* implicit */_Bool) arr_0 [i_1]))))))))))) : (((max((((/* implicit */long long int) -113920834)), (arr_11 [i_2]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) 1665213644)) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) && (((/* implicit */_Bool) arr_0 [i_1])))))))))));
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-8345722755869820360LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : ((+(arr_1 [i_2])))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1]))) ^ ((~(min((arr_23 [i_1] [i_2] [i_2] [10LL] [i_4] [10LL]), (((/* implicit */unsigned long long int) arr_7 [i_1])))))))))));
                            var_28 = arr_5 [i_4];
                            arr_27 [i_4 + 1] [i_1] [i_1] [i_2] [i_5] = ((/* implicit */long long int) ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))) > (12950311776174396230ULL))) ? (((int) 285501449)) : (((((/* implicit */_Bool) (signed char)88)) ? (-1283932243) : (((/* implicit */int) arr_18 [i_3] [i_2])))))));
                            arr_28 [i_2] = arr_26 [i_1] [i_1] [i_2] [i_4 - 1] [i_3] [i_1];
                        }
                    } 
                } 
            } 
        }
    }
    var_29 = ((/* implicit */_Bool) var_2);
}
