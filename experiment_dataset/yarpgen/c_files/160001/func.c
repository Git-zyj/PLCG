/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160001
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */int) ((var_6) == (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4)))))))) * (((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_1] [i_0] [i_3 + 2]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_6 [i_0])) - (23866)))))) : (((unsigned int) var_0))));
                                var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((signed char) arr_12 [i_3] [i_3] [0LL] [i_2] [10U] [i_0] [10U])))) == (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_0 [13U]))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53448))) < (0U)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_2) << (((((/* implicit */int) var_0)) - (33)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (arr_2 [i_0]))))) : (((4519205488123438266LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-32767))))))) - (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))))) % (((/* implicit */int) ((_Bool) arr_4 [i_1]))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_0])))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)6259))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) var_4)))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (unsigned char)143)))))) == (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [12LL] [i_1]))) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (134217727U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_2]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -820548696)) && (((/* implicit */_Bool) var_0)))))) : (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) ((unsigned short) (unsigned char)5)))))));
    var_15 ^= ((/* implicit */signed char) var_8);
}
