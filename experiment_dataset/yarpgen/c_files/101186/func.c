/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101186
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((~(((/* implicit */int) (unsigned short)65519)))) : (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) (_Bool)0);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_14 ^= ((/* implicit */unsigned long long int) arr_3 [i_3] [i_1]);
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(17358585511821663730ULL))))));
                        var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (17668305651313979799ULL) : (((/* implicit */unsigned long long int) var_11))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_17 ^= min((((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)102))))))), (((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4] [i_4 - 1] [i_4])) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) arr_11 [18ULL] [18ULL])))));
        var_18 = ((/* implicit */long long int) (+(((var_3) % (((/* implicit */int) arr_8 [i_4 - 1] [i_4] [i_4 - 1] [i_4]))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
        arr_13 [i_4] [i_4] = ((/* implicit */signed char) ((14651665048749939759ULL) != (((/* implicit */unsigned long long int) ((arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1])))))));
        var_20 = ((/* implicit */unsigned long long int) -6666485779937552833LL);
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)156))))), (max((((/* implicit */long long int) var_2)), (var_0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 10242007132918554673ULL)) ? (13397757477137166612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))))));
        arr_19 [i_5] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) min(((unsigned char)255), (arr_1 [i_5])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)94)))) <= ((+((~(((/* implicit */int) (signed char)102))))))));
    }
}
