/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140091
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
    var_19 = ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_0)))) % (var_1))) >= (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_13)) == (var_6)))))));
    var_20 |= ((/* implicit */unsigned char) -1696020178);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((((410558518U) - (3884408779U))) << (((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (short)20872)) : (((/* implicit */int) (unsigned short)15)))) - (20847))))))))));
                arr_6 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((max((-7393197786357339275LL), (2406032281942307818LL))) + (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) & (((/* implicit */int) (unsigned char)95)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((min((((/* implicit */int) min(((short)-20879), (((/* implicit */short) var_18))))), (var_13))) ^ (((/* implicit */int) ((-404572250) > (((/* implicit */int) (short)-17238)))))));
                                arr_14 [i_0] [i_0] [i_2] [22ULL] [i_4] [i_4] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_11 [(signed char)19]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) arr_2 [i_0 + 2]);
                    var_24 = ((/* implicit */int) max((var_24), (max((((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [0U] [i_2] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2])))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 2] [i_0 + 3]))))))));
                }
                for (long long int i_5 = 2; i_5 < 23; i_5 += 4) 
                {
                    arr_17 [i_0] = ((/* implicit */_Bool) max((min((arr_5 [i_0] [i_5 - 2] [(unsigned short)1]), (arr_5 [i_1] [i_5 + 2] [i_5]))), (arr_5 [i_1] [i_5 + 1] [i_5])));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_13 [i_0]))));
                        arr_22 [(unsigned short)4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) max((var_3), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-32)))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6 + 1] [i_5 - 2] [i_0 + 1])) < (min((var_1), (((/* implicit */int) arr_7 [i_6 + 1] [i_5 - 2] [i_0 + 1]))))));
                    }
                    var_27 -= ((/* implicit */unsigned short) var_13);
                    var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26065)) ? (arr_19 [i_0 + 1] [i_0] [i_0] [3U] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) arr_12 [i_1] [i_0] [i_5] [i_1] [i_0] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 3] [(_Bool)0] [i_0 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 + 2]))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) ^ (8572032700278009226ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [(signed char)15] [i_1])))))))));
                }
            }
        } 
    } 
    var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 410558502U)) || (((/* implicit */_Bool) -404572228))));
}
