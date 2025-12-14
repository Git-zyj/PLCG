/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113406
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (max((var_2), (((/* implicit */unsigned long long int) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (short)17741)), (arr_1 [i_0 - 1]))) >> ((((+(((unsigned long long int) var_9)))) - (9777ULL)))));
                var_13 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) < (((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) - (arr_3 [0LL])))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_1 [i_0 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-9223372036854775806LL) != (((/* implicit */long long int) ((/* implicit */int) (short)17741))))))) : (((arr_1 [i_0 + 3]) ^ (arr_1 [i_0 - 2])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((var_8) / (((/* implicit */long long int) arr_2 [i_0 - 2] [i_0 + 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned int) (+(((long long int) (unsigned char)92))));
        var_15 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */int) (signed char)-50)) / (((/* implicit */int) (unsigned char)146)))))) == (((/* implicit */int) ((arr_0 [i_2]) != (((/* implicit */unsigned long long int) var_7)))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        var_16 *= ((/* implicit */short) min((((/* implicit */int) ((((((/* implicit */_Bool) 10544799375669863470ULL)) && (((/* implicit */_Bool) -3687532272268642384LL)))) || (((/* implicit */_Bool) max(((short)17749), ((short)9627))))))), ((+(var_5)))));
        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((max((((/* implicit */unsigned long long int) -6181265480083713291LL)), (arr_10 [i_3]))) + (((/* implicit */unsigned long long int) arr_4 [i_3])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        var_18 *= ((/* implicit */signed char) ((((arr_11 [i_4]) + (arr_11 [i_4]))) % ((-(((/* implicit */int) (signed char)-20))))));
        var_19 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) | (arr_3 [i_4]))));
    }
    var_20 = ((/* implicit */int) var_6);
}
