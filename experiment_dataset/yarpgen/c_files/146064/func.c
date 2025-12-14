/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146064
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) var_2);
                arr_6 [5U] &= ((/* implicit */unsigned long long int) arr_3 [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) (_Bool)1)))));
                                var_14 = ((/* implicit */short) ((long long int) ((unsigned int) max(((_Bool)1), ((_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((var_5) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [0ULL] [i_2] [i_5]))))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned short)21192)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_1] [(signed char)2])))) : (((((/* implicit */_Bool) arr_7 [6U] [i_5])) ? (((((/* implicit */_Bool) (short)-4015)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_11))) : (var_11)))));
                        var_16 = ((/* implicit */unsigned int) (short)-4027);
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_0)))))))));
                        var_18 -= ((/* implicit */unsigned long long int) ((short) max((((short) -4265136232628909699LL)), (((/* implicit */short) var_9)))));
                    }
                    var_19 = ((/* implicit */unsigned int) max((((((1965293254857041029ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_2]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [13LL])) ? (var_8) : (((/* implicit */int) var_6))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (2147483648U))))))));
                }
                var_20 = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) 3115234956U)) ? (((var_5) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7]))))) : (((/* implicit */long long int) (((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7]))))))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 10U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))))))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((max((4482033525292425969ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7] [(_Bool)0] [(unsigned char)8] [i_8])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) max((arr_14 [(unsigned char)10] [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]), (arr_14 [(signed char)10] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 - 1])))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) max((((/* implicit */long long int) var_8)), (697570128896553443LL))))) + ((-(((/* implicit */int) (_Bool)1))))));
}
