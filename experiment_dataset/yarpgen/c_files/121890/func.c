/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121890
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)39)) << (((/* implicit */int) (_Bool)1))))) ? (2016375850) : (((arr_7 [i_0] [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */int) (unsigned short)23292)) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)5])))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_1 [i_0] [0U]))))) || ((!((_Bool)1))))))));
                    var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [2LL])))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0]))) : (2757882613499138598ULL)))))) || ((_Bool)1)));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0 + 1] [(short)2] [i_0] [i_0 + 1])))), (arr_2 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((((/* implicit */_Bool) (unsigned short)25654)) ? (12182634092371969373ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25019))))) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_5))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17077418671479246586ULL)) ? (6438825231233535378ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2757882613499138611ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (signed char)-116)))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((/* implicit */int) var_11)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min(((signed char)-74), (var_12))))))) : (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) var_12)), (3731560133U))) : (((((/* implicit */_Bool) 1608714950U)) ? (var_10) : (var_5)))))));
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_0)), (((207052133963023450ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
}
