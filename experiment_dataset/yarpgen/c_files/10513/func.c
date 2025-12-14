/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10513
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
    var_19 = ((/* implicit */unsigned char) var_7);
    var_20 = ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)59194)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0]))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)23022)) >= (((/* implicit */int) (unsigned short)42511))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)28786))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)7237);
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */short) ((((10082009043845916829ULL) + (((14870784696647441275ULL) - (((/* implicit */unsigned long long int) 746768656U)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(signed char)6]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (8364735029863634786ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3])))))))))) | (((((/* implicit */_Bool) (unsigned short)46396)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (10231434030551138953ULL))));
        arr_13 [i_3] = ((/* implicit */unsigned short) (signed char)-22);
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (((((((_Bool)1) ? (arr_9 [i_4] [i_4]) : (((/* implicit */unsigned long long int) var_0)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (736804823U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)837)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)42187), ((unsigned short)32216))))) - ((-(var_3)))))))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) - (10348852123398097970ULL)))) || (((/* implicit */_Bool) ((signed char) arr_9 [(_Bool)1] [i_5])))))))))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max(((unsigned short)41244), ((unsigned short)3254)))))) <= (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)26532))))), (min((12385946121125032757ULL), (((/* implicit */unsigned long long int) arr_0 [i_5])))))))))));
        }
        arr_20 [i_4] = ((/* implicit */unsigned long long int) arr_18 [(signed char)1] [i_4]);
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) ((signed char) arr_11 [i_6]));
        var_29 -= ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_6] [i_6]))) ? ((~(12427822347340259843ULL))) : (((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_6] [19U]), (arr_22 [i_6]))))) : (((unsigned long long int) (unsigned short)18855)))));
    }
}
