/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176568
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((short) (short)(-32767 - 1)))) ? (max((-1LL), (-7160956200224196842LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (1341170017929510449ULL)))))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8973522220828700354LL)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (_Bool)1))))), (17105574055780041170ULL)))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_1 - 2]) >> (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -8973522220828700370LL)))))) : (var_3)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0))))), (((-8973522220828700354LL) | (8973522220828700349LL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)106))))) : (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_1))))))))));
        arr_10 [8LL] &= ((/* implicit */long long int) var_2);
        arr_11 [5LL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) / (var_5)));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned int) var_9));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_13 [i_3]) > (arr_13 [i_3])))) | (max((arr_13 [i_3]), (arr_13 [i_3]))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((unsigned int) max((arr_14 [i_3]), (((/* implicit */long long int) arr_13 [i_3]))))))))));
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) var_2);
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (min((-8973522220828700362LL), (-8973522220828700344LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [12ULL])))))) ^ (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) + (min((var_4), (((/* implicit */unsigned long long int) var_9))))))))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((-465668922408164378LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167)))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_0)))))) : (((/* implicit */int) var_6))));
}
