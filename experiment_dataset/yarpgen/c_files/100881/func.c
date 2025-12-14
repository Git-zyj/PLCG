/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100881
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
    var_10 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))) < (min((((((/* implicit */_Bool) 8388607)) ? (var_2) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (unsigned char)79))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-(arr_2 [i_0]))))) : (((/* implicit */long long int) max((((/* implicit */int) var_7)), ((~(((/* implicit */int) (unsigned short)65535)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 - 3] [i_2 - 3]))))) || ((!(((((/* implicit */_Bool) 3875229210U)) || (((/* implicit */_Bool) var_3)))))))))));
                            var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)171)))));
                            arr_9 [i_3] [(unsigned char)6] [(unsigned char)6] [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned int) (_Bool)0);
                            var_16 = ((/* implicit */signed char) min((((((((/* implicit */int) var_1)) > (((/* implicit */int) var_5)))) ? ((~(((/* implicit */int) arr_5 [(unsigned char)8] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0]))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_12 [i_0] [14LL] [i_0 + 2] [i_5] [i_4]))))));
                            arr_15 [i_0] [i_1] [i_4] [i_0] [i_5] [i_1] = ((/* implicit */unsigned long long int) var_1);
                            var_18 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) arr_13 [i_0] [i_0] [i_0] [(unsigned char)13] [i_0] [i_5]))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_4])) < (((/* implicit */int) var_7))))), (min((var_9), (((/* implicit */unsigned long long int) arr_6 [i_5] [14U] [i_4]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) min(((-((+(((/* implicit */int) (unsigned short)11627)))))), (((/* implicit */int) arr_7 [i_1] [10ULL]))));
            }
        } 
    } 
}
