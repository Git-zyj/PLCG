/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130805
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
    var_11 = ((/* implicit */int) (_Bool)0);
    var_12 = ((/* implicit */signed char) (+(var_2)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) * (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_0])))) << ((((+(1784661287))) - (1784661260))))))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_4 [i_2] [i_1]))));
                    var_14 = (-(max((((((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_2] [(_Bool)0])) - (var_2))), (((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_0] [i_0] [i_0 + 1]) - (((/* implicit */long long int) -1784661303))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) ? (((((/* implicit */_Bool) 1784661302)) ? (arr_2 [i_1 + 2]) : (arr_2 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((((arr_8 [i_0] [5] [i_2] [i_0]) || (((/* implicit */_Bool) -1784661288)))) ? ((+(arr_1 [i_0]))) : (((1784661284) >> (((/* implicit */int) arr_8 [12] [i_1] [(signed char)4] [i_1])))))))));
                }
                var_15 = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned long long int) (+((-(1784661278))))))));
                arr_12 [0U] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_1 + 2])))) ? (((((/* implicit */_Bool) 1784661287)) ? (1784661278) : (1784661283))) : (1784661288)));
                var_16 = ((/* implicit */_Bool) max((-1784661288), (-1784661288)));
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1784661302)) ? (arr_3 [i_0 + 1] [i_0 - 1]) : (arr_3 [i_0 + 1] [i_0 - 1]))) < (((/* implicit */unsigned long long int) (-(var_4))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((((-(-1784661303))) > (1784661289))) ? (var_6) : (((/* implicit */unsigned int) max((1784661286), (-1784661279)))))))));
                    var_18 = ((/* implicit */int) min((var_18), (((max(((+(-1784661296))), ((~(1784661253))))) / (arr_20 [i_4] [i_4] [i_4] [i_4])))));
                    arr_22 [i_3] [i_4] = ((/* implicit */_Bool) (-(((arr_21 [10] [i_4] [i_5]) % (min((var_8), (((/* implicit */long long int) 1784661266))))))));
                    arr_23 [i_3] [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */int) (!(arr_15 [i_3])))) >= (((/* implicit */int) ((((/* implicit */_Bool) -1784661254)) || (((/* implicit */_Bool) arr_19 [i_3] [i_4]))))))) ? (min((((((/* implicit */_Bool) -1784661262)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (arr_21 [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) (-(1784661287))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((1784661276) - ((~(-1784661303)))));
}
