/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184883
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
    var_11 *= ((/* implicit */unsigned short) ((((((/* implicit */long long int) (-2147483647 - 1))) / (((((/* implicit */_Bool) var_6)) ? (9007199254740991LL) : (-9007199254740991LL))))) | (((max((((/* implicit */long long int) (_Bool)0)), (-9007199254740976LL))) ^ (min((((/* implicit */long long int) (unsigned char)67)), (-9007199254740976LL)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_13 -= ((/* implicit */_Bool) -3538123942427140064LL);
            var_14 = ((/* implicit */unsigned long long int) ((unsigned char) ((max((((/* implicit */unsigned long long int) -9007199254740991LL)), (783645172209761482ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))));
            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 9007199254740967LL)) : ((-(arr_4 [i_0] [(unsigned char)9] [(signed char)20]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_1 [i_0])))))) < (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) 122880))))))))));
            arr_7 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (signed char)2)), (-9007199254740964LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -9007199254740965LL)) > (arr_4 [i_0] [i_1] [i_1]))))));
            var_16 = ((/* implicit */unsigned long long int) 9007199254740995LL);
        }
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 3; i_3 < 23; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((min((-9007199254740964LL), (((((/* implicit */_Bool) -9007199254740976LL)) ? (-1347495703552074925LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))))), (((/* implicit */long long int) (((-(arr_12 [i_2] [i_4]))) ^ (-2018508700))))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_10 [i_3 - 3] [i_2] [i_2] [i_4])) << (((/* implicit */int) arr_10 [i_3 - 1] [i_2] [(short)17] [i_4]))))))));
                    }
                } 
            } 
            arr_14 [i_0] = ((/* implicit */_Bool) max((min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)32)))))), (((/* implicit */unsigned long long int) ((min((35150012350464LL), (((/* implicit */long long int) (_Bool)0)))) - (max((9007199254740958LL), (((/* implicit */long long int) (signed char)-56)))))))));
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((long long int) -9007199254740962LL));
            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_5 [i_5]) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) (_Bool)1))))), (288230371856744448LL)));
        }
    }
}
