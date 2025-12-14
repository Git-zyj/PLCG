/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120754
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */short) arr_2 [13LL]);
            var_17 = ((/* implicit */long long int) min((((10784406069590066366ULL) % (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) > (3342233651353214998ULL))))));
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [i_2]))));
            arr_9 [i_0] = ((/* implicit */unsigned int) ((long long int) arr_1 [i_2] [i_2 - 1]));
            arr_10 [i_0] = 16358214008685316825ULL;
            arr_11 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) var_11)))) >> (((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) var_11)))) + (6842658070748784370LL)))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((int) var_5));
        var_19 = ((/* implicit */short) min(((+((~(2088530065024234791ULL))))), (((/* implicit */unsigned long long int) ((long long int) (-(3124581287U)))))));
        var_20 = ((/* implicit */int) (((+(((var_6) ? (((/* implicit */long long int) var_11)) : (var_5))))) >> (((((unsigned int) var_0)) - (1930388813U)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */long long int) var_4)))) + (((/* implicit */long long int) ((/* implicit */int) var_7))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))) || (((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3]))))) >> ((((~(max((var_0), (var_5))))) + (4129732739620228149LL)))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((2088530065024234790ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) ((int) 684668854)))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) (short)-24776)), (var_15))))) >= (max(((-(var_8))), (((/* implicit */unsigned long long int) var_5)))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -5147868041330821987LL)) ? (var_8) : (((/* implicit */unsigned long long int) var_12)))))) ? (((((/* implicit */_Bool) -106983309)) ? (min((var_16), (((/* implicit */long long int) (short)-32444)))) : (((/* implicit */long long int) min((1752188583U), (((/* implicit */unsigned int) (unsigned char)58))))))) : (((/* implicit */long long int) ((int) (_Bool)0)))));
        var_24 = ((/* implicit */long long int) ((int) (+(((var_13) ? (((/* implicit */unsigned long long int) var_0)) : (arr_16 [i_4]))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))) == (arr_3 [i_4])))) == (((/* implicit */int) var_9))));
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned long long int) (signed char)-51)))));
}
