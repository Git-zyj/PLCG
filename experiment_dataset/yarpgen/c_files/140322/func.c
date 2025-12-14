/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140322
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
    var_12 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12689))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (10632389056727994386ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (14361984782463050953ULL) : (((/* implicit */unsigned long long int) -432255608))))) ? (((/* implicit */int) (signed char)-46)) : ((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))) < ((-(((/* implicit */int) (signed char)-49))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)61)) | (((/* implicit */int) (signed char)74))));
                var_14 = ((/* implicit */signed char) (_Bool)1);
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)49)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)3814)))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((185464598), (((/* implicit */int) (unsigned short)39794))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((5044807385529542346ULL) <= (((/* implicit */unsigned long long int) 6018187584778702989LL))))));
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                {
                    var_15 -= ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)31239)));
                    arr_19 [i_4] [i_1] [i_4] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1051816395)))))) > (((((/* implicit */_Bool) 74638437U)) ? (((/* implicit */unsigned int) min((-1051816395), (1051816382)))) : (3115044342U)))));
                    arr_20 [i_0] [(signed char)6] = ((/* implicit */long long int) (+(((13263797917452680192ULL) >> (((((/* implicit */int) (signed char)-124)) + (143)))))));
                    arr_21 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1926128947U)) ? ((+(((/* implicit */int) (signed char)82)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-49)) == (((/* implicit */int) (signed char)39))))))))));
                }
            }
        } 
    } 
}
