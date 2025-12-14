/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164606
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
    var_16 = ((/* implicit */unsigned int) ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) & (var_4))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5123))) | (var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) min((((short) var_2)), (((/* implicit */short) min(((signed char)116), (arr_6 [i_1]))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [(unsigned short)9])) ? (arr_1 [i_0] [(signed char)4]) : (((/* implicit */long long int) 18U))))))));
                            var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)3] [i_2] [i_0] [13])) && (((/* implicit */_Bool) (signed char)116)))))))));
                            var_19 *= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)38668)), ((-(((/* implicit */int) (signed char)-119))))));
                            arr_11 [11LL] [11LL] = ((/* implicit */short) max((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) max((arr_4 [i_0] [i_1] [i_2]), ((_Bool)1))))))), (min((-6395942868332305826LL), (((/* implicit */long long int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) <= (var_13))) || (((((/* implicit */_Bool) (unsigned short)65520)) || (((/* implicit */_Bool) arr_2 [i_0]))))))) % (((/* implicit */int) arr_6 [i_0]))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (-6395942868332305826LL)))) : (max((14941039861458385815ULL), (((/* implicit */unsigned long long int) (signed char)109))))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [(signed char)6] [(unsigned char)8] [i_4] [(signed char)6] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)4]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [7U] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3321393714U))))) & (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_0 [i_5])))))))));
                            arr_18 [i_0] [(signed char)2] [i_4 - 1] [i_5] [(signed char)5] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_4]))) + ((-(arr_5 [i_0] [(unsigned short)2] [i_4] [i_5]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_1]);
            }
        } 
    } 
}
