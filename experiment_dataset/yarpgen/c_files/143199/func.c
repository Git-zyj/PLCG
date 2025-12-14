/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143199
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) >= (-2902082134238626350LL)))))) * ((-(((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
                        var_18 = ((/* implicit */long long int) max((var_18), ((~(max((max((((/* implicit */long long int) (short)-14586)), (var_7))), (((/* implicit */long long int) min((var_10), (((/* implicit */int) (short)25593)))))))))));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-76)))), (min((-1681042733), (((/* implicit */int) (signed char)-62))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 4052542058U)) : (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4294967272U)))) : (var_3)))) : (max((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_14)))), (((((/* implicit */_Bool) (unsigned char)115)) ? (var_7) : (var_7)))))));
                    }
                    arr_13 [i_0] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) var_4)), (var_3))))), ((~(((((/* implicit */_Bool) (signed char)19)) ? (3324055823U) : (var_13)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (var_0) : (((/* implicit */long long int) 2147483629))))) : (((18410715276690587648ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))))))) % (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 2648461095565450965ULL)) ? (var_7) : (var_7)))))));
    var_20 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)40)))) / (((((/* implicit */_Bool) (unsigned short)10)) ? (1761598703) : (((/* implicit */int) var_2))))))), (min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (var_1))));
}
