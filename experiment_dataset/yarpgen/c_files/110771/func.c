/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110771
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
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65408)) >> (((var_9) + (1934880070229924526LL)))))) ? (((((/* implicit */_Bool) (unsigned short)65408)) ? (-8001995849666691965LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_10)) ? (max((var_9), (((/* implicit */long long int) var_13)))) : (((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [6])) : (((/* implicit */int) var_4))))) ? (((var_5) ? (3467904216964499274LL) : (((/* implicit */long long int) arr_2 [i_0] [i_0 - 3])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) var_14)))))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39710))) ^ (-3467904216964499274LL)));
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((((/* implicit */_Bool) 530668660658475562LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_15))) : (((/* implicit */long long int) (+(var_3)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_5 [i_0] [13LL])))))) : (((((/* implicit */long long int) var_3)) % (-530668660658475563LL)))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_11)))))) ^ (((/* implicit */int) ((unsigned char) -4013795120607103423LL)))));
}
