/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148073
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(-8484142115187050703LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-79))))), (((((/* implicit */_Bool) var_11)) ? (-8484142115187050694LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (var_2))))))) : ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-28277)) : (var_10)))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-20))) > (8484142115187050676LL))))))) ? (((((/* implicit */int) (signed char)-91)) ^ (((/* implicit */int) (short)5341)))) : (min((-2089772605), (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 += ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (signed char)-103)));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) && ((!(((/* implicit */_Bool) arr_0 [i_0]))))))), (min((((/* implicit */short) (signed char)-68)), (max((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) <= (var_2))))));
        var_19 = ((/* implicit */unsigned char) max(((signed char)-68), (((/* implicit */signed char) (_Bool)1))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((((/* implicit */_Bool) (signed char)-74)) || (((/* implicit */_Bool) var_9))))));
        arr_6 [i_1] [i_1] |= ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_1] [i_1])) != (((/* implicit */int) (signed char)76)))) ? (((/* implicit */int) arr_3 [i_1])) : ((~(((/* implicit */int) var_12))))));
    }
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) max((((((/* implicit */int) arr_7 [i_2 - 1])) + (((/* implicit */int) arr_7 [i_2 - 1])))), (((/* implicit */int) min((arr_7 [i_2 - 1]), (((/* implicit */short) var_9)))))));
        arr_10 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_2 + 1]), (min((((/* implicit */short) var_4)), (arr_8 [i_2 + 1]))))))));
        arr_11 [i_2 + 1] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2])))))) != ((+(((/* implicit */int) (unsigned char)98))))));
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) (signed char)0))))))))));
    }
}
