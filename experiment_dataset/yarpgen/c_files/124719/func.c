/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124719
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((unsigned char) var_3))), (((short) var_15))))) ? (((/* implicit */int) ((unsigned short) ((signed char) var_3)))) : (((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (((((unsigned long long int) arr_0 [i_0] [i_0])) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) arr_3 [i_0] [11U]))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((12920806130301700731ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) || (((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (signed char)-44))))))) : (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (arr_1 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((2250032840U) != (((4005925989U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))))) != (((/* implicit */int) (unsigned short)15104))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((7125488480620877910ULL), (((/* implicit */unsigned long long int) (unsigned char)158)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((arr_2 [i_1]), (((/* implicit */unsigned char) arr_7 [i_1] [i_1]))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) & (arr_8 [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) || (((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_20 = ((unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26585)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (1356790431U)))), (((long long int) arr_12 [i_2] [i_2]))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) (~(5203245350082019224LL)));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_14)));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            {
                var_22 -= ((/* implicit */signed char) ((short) ((short) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */long long int) 3493623517U)) : (5203245350082019224LL)))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_15 [i_4])))) ? (((((/* implicit */int) arr_17 [i_4])) * (((/* implicit */int) max((arr_3 [i_3] [i_3]), (arr_0 [i_4] [i_3])))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [17U])) ? (((/* implicit */int) arr_3 [i_3] [i_4])) : (((/* implicit */int) arr_15 [i_4]))))))));
                arr_18 [i_4] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4])) * (((/* implicit */int) arr_14 [i_4]))))) ? (((((/* implicit */_Bool) arr_15 [i_3])) ? (arr_1 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_0 [i_3] [i_4])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))))));
                var_24 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((short) arr_6 [8ULL]))))) % (max((((((/* implicit */_Bool) arr_12 [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [12U]))) : (arr_8 [i_3]))), (((/* implicit */unsigned long long int) max((arr_17 [i_3]), (arr_11 [i_3]))))))));
            }
        } 
    } 
}
