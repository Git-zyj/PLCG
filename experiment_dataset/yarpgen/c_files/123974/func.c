/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123974
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
    var_17 ^= ((((((var_4) > (var_2))) ? (var_10) : (((9007199254708224ULL) ^ (var_0))))) - ((+(var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(min((17592118935552ULL), (arr_3 [10ULL] [16ULL])))))))))));
                var_19 = arr_3 [i_1] [i_1];
            }
        } 
    } 
    var_20 = ((unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2]))));
        arr_10 [i_2] = (+(((((/* implicit */_Bool) var_3)) ? (max((9007199254708228ULL), (var_10))) : (9007199254708209ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                var_22 = arr_7 [i_3] [i_3];
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 3) 
                    {
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] [i_4] = arr_21 [i_2] [i_2] [i_3] [i_5] [i_6] [i_4] [i_5];
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_3] [i_6 - 1] [i_3] [2ULL] [i_4])) ? (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_3]) : (var_13))) : ((~(var_12)))))) ? (arr_21 [i_2] [i_2] [i_3] [i_3] [i_6] [i_4] [i_5]) : (18437736874454843390ULL));
                            var_24 = 6224117615625079279ULL;
                            var_25 = 9051193499347914811ULL;
                        }
                    } 
                } 
            }
            for (unsigned long long int i_7 = 4; i_7 < 17; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_26 = 9395550574361636804ULL;
                            arr_31 [i_3] [i_3] [i_3] [2ULL] [i_9] = arr_25 [i_8 + 2];
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((var_1) > (var_2))))))));
                arr_32 [i_3] [i_3] = ((((((/* implicit */_Bool) (+(137438953471ULL)))) ? (((unsigned long long int) 9051193499347914811ULL)) : (arr_15 [i_3] [i_3]))) & (((unsigned long long int) var_10)));
            }
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_28 = min((var_1), (max((17103458760298413886ULL), (arr_34 [i_2] [i_3] [i_3]))));
                            arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] = ((23ULL) | (18437736874454843390ULL));
                            var_29 = max((max((17592186043392ULL), (18446744073709551615ULL))), (max((max((9223992379099422727ULL), (4052173517441965274ULL))), ((+(arr_8 [i_2]))))));
                            var_30 = 9007199254708228ULL;
                        }
                    } 
                } 
                var_31 = 9051193499347914811ULL;
            }
            var_32 = arr_25 [i_2];
            var_33 = ((((/* implicit */_Bool) 15087626414988759383ULL)) ? (arr_27 [i_3] [i_3] [i_3] [i_3]) : (((13396614101220273569ULL) | (0ULL))));
        }
        var_34 = max(((-(((((/* implicit */_Bool) 8009111402751517194ULL)) ? (18446726481523508241ULL) : (5050129972489278042ULL))))), (var_0));
    }
}
