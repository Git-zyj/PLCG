/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104038
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
    var_12 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_8))))));
    var_13 = ((/* implicit */unsigned int) min((var_6), ((!(((/* implicit */_Bool) max((((/* implicit */short) var_6)), (var_11))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) 808014283U);
                        arr_12 [i_3] [i_1] [i_1] = ((/* implicit */short) min((arr_3 [i_3]), ((unsigned short)65523)));
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_3 [i_1]))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((var_2), (((/* implicit */short) ((_Bool) arr_0 [i_0]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))) : (13475014822734615035ULL)));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                var_17 -= ((/* implicit */unsigned long long int) max((var_10), ((!(((1363533245U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                arr_22 [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (4971729250974936581ULL) : (((/* implicit */unsigned long long int) arr_19 [i_5 - 1] [i_5 - 1] [i_6] [i_4 + 1])))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) ((_Bool) (unsigned short)12))), (max((arr_6 [i_4 - 2] [i_4] [i_5 - 1]), (arr_6 [i_4 - 2] [17LL] [i_5 - 2])))));
                var_19 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */unsigned long long int) (_Bool)0)), ((+(4971729250974936601ULL))))));
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 3518582379U)), (((((/* implicit */_Bool) min((3ULL), (((/* implicit */unsigned long long int) arr_6 [3LL] [3LL] [3LL]))))) ? (((((/* implicit */unsigned long long int) (-2147483647 - 1))) - (4971729250974936599ULL))) : (((13722980630705795395ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_8 = 3; i_8 < 10; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned int) 29ULL);
                            arr_33 [(_Bool)0] [i_10] [i_8] [i_8] [i_10] [(_Bool)0] = ((/* implicit */unsigned short) arr_7 [i_8 - 3] [i_8 - 1] [i_8 - 2] [i_8 - 2]);
                            var_22 &= (+(max((arr_28 [i_4 + 2] [i_4 + 2] [i_8 + 1] [i_5 + 1] [i_4 + 2]), (arr_28 [i_4] [i_5] [i_8 - 1] [i_9] [i_4]))));
                            arr_34 [i_10] = ((/* implicit */int) (+(max((((arr_2 [i_5] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9]))))), (((/* implicit */unsigned int) arr_4 [i_4 - 1]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_11))));
        }
    }
}
