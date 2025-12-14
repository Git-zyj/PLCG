/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180030
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
    var_14 |= ((/* implicit */unsigned short) var_12);
    var_15 |= ((/* implicit */int) ((unsigned short) ((((unsigned long long int) var_7)) - (((/* implicit */unsigned long long int) (~(var_8)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) ((short) (_Bool)1)))))), (var_9)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            arr_4 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
            var_17 |= ((/* implicit */unsigned short) (_Bool)1);
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(1979392793722845015LL)))) && ((!((_Bool)1)))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            arr_7 [i_2] [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
            var_19 = ((/* implicit */unsigned int) (((+(-2631660112460815930LL))) + (((/* implicit */long long int) max(((+(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)6097)))))))));
            var_20 = ((/* implicit */_Bool) var_10);
        }
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5660))) < (var_3)))) <= (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) -2517453739563032656LL)) ? (371862258) : (((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) ((-2056740077) < (((/* implicit */int) arr_8 [i_3]))))))))));
            var_23 = ((/* implicit */long long int) ((unsigned int) (+(-2517453739563032655LL))));
        }
    }
    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
    {
        var_24 = ((/* implicit */short) ((((arr_12 [i_4 - 1] [i_4 - 1]) & (arr_12 [i_4 - 1] [i_4]))) - (max((arr_12 [i_4 - 1] [i_4 + 2]), (arr_12 [i_4 - 1] [i_4])))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) * (var_2)))) ? (arr_11 [i_4 + 1]) : (min((arr_11 [i_4 + 2]), (arr_11 [i_4 + 1])))));
        arr_13 [i_4 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)208)) ? (2517453739563032656LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_10 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned long long int) (_Bool)1)))))));
        arr_14 [i_4 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (arr_10 [i_4]) : (((/* implicit */long long int) arr_12 [i_4] [i_4 + 1])))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_26 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) / (var_9)))), ((-((+(16396958209320324883ULL)))))));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-10673)) <= (((/* implicit */int) ((_Bool) (~(var_4))))))))));
        arr_19 [i_5] = ((/* implicit */signed char) var_12);
    }
}
