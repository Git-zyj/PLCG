/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122301
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (18116900106331554940ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (var_2)))) ? (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (signed char)-86))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 12521362039490843898ULL))))) != (((/* implicit */int) max(((signed char)55), ((signed char)-56)))))))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) : (var_11))), (var_10)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (-5024598471940779766LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [3ULL] [3ULL])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) var_2)) : (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))) : (18446744073709551602ULL)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (5024598471940779777LL) : (((/* implicit */long long int) 370079277)))) != (-5024598471940779773LL)));
    }
    for (signed char i_1 = 2; i_1 < 6; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1]))) : (max((((/* implicit */long long int) var_4)), (-6888778894607494768LL)))))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)-21))))))) : (((var_5) + (((/* implicit */unsigned long long int) -1))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 6; i_5 += 3) 
                        {
                            {
                                arr_19 [i_4] [i_4] [i_4] [i_4] [0U] [i_4] [i_4] &= ((((/* implicit */_Bool) (+(((arr_0 [i_2]) ? (69122499738444445ULL) : (var_7)))))) ? (((/* implicit */unsigned long long int) max((3689263416U), (((/* implicit */unsigned int) arr_9 [i_5 + 2] [i_5] [i_1 + 4]))))) : (((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - ((((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) arr_7 [i_3])))))));
                                var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (min((((/* implicit */unsigned int) 2147483638)), (1095664976U))) : (max((((/* implicit */unsigned int) arr_2 [i_1] [i_2])), (var_11)))))));
                                arr_20 [i_5] [i_5] [i_1 - 2] = max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (6551716258373085929ULL));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (!((_Bool)1)))), ((+(var_6)))))) < (((((/* implicit */_Bool) 38ULL)) ? (6888778894607494768LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))));
                    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((-6888778894607494792LL), (((/* implicit */long long int) arr_10 [5ULL] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (var_11) : (var_11)))))))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) var_2))))));
                }
            } 
        } 
    }
}
