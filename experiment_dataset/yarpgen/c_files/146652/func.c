/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146652
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_7)) >= (var_0))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_3))))));
                        arr_12 [i_1] [i_1] [i_1] [i_3] [11LL] = ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_2]) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_1])) % (var_4))))));
                    }
                } 
            } 
            arr_13 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_6 [i_1] [i_1] [i_0]) ^ (((/* implicit */int) var_9))));
            var_13 += (+(arr_1 [i_0]));
            var_14 += ((/* implicit */signed char) arr_7 [i_0]);
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                arr_17 [i_0] [i_1] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_1]))) : (((((/* implicit */_Bool) 16458180454260685357ULL)) ? (14415748672331360865ULL) : (16458180454260685357ULL))));
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) && (((/* implicit */_Bool) ((arr_1 [i_0]) >> (((arr_0 [(signed char)7]) + (697564718))))))));
            }
            for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((long long int) var_3));
                            arr_28 [i_1] [i_1] [i_1] [i_5] [i_6] [(signed char)5] = ((/* implicit */short) ((1988563619448866259ULL) > (1988563619448866259ULL)));
                        }
                    } 
                } 
                arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) ((int) var_4)))));
            }
            for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) == (arr_1 [i_8])))) / (var_5)));
                arr_33 [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0]))) > (var_0)));
            }
        }
    }
    var_17 = min((((((/* implicit */_Bool) 14636224480992019502ULL)) || (((/* implicit */_Bool) 16458180454260685357ULL)))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_4)))) || (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0)))))));
}
