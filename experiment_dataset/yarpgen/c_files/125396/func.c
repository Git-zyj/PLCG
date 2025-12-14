/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125396
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (min((((/* implicit */unsigned long long int) var_4)), (14142308813640315950ULL)))))) && (((/* implicit */_Bool) max((arr_1 [i_0]), (max(((unsigned short)65529), ((unsigned short)384))))))));
                    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)239))))))), (arr_3 [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) ^ (7602356551017670558LL)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65164))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (10918218989776737700ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)240)))))))));
}
