/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165411
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
    var_16 = ((/* implicit */int) (!((!(((((/* implicit */_Bool) 8U)) && (((/* implicit */_Bool) 0U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 0U))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65525)) && (((/* implicit */_Bool) 5624144250931670951ULL))))), (((var_1) << (((((/* implicit */int) arr_6 [i_0] [i_1] [11U] [i_3])) - (57)))))))) : ((~(max((var_2), (((/* implicit */long long int) arr_4 [i_0]))))))));
                            var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (10953756188867058694ULL)));
                            var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4210859960210166981LL)) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-21))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) % ((((+(9223372036854775789LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_0])))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)139)) >> (((((int) -1584729254)) + (1584729277)))));
            }
        } 
    } 
}
