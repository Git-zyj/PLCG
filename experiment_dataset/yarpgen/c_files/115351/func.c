/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115351
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))))) : (((unsigned int) (unsigned char)185))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) (signed char)31))) : (((/* implicit */int) ((short) var_5)))))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */int) (_Bool)0);
                                arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_0)))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) var_1)))))) : (((var_0) & (((/* implicit */int) var_8))))));
                                var_13 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                                var_14 = ((unsigned short) ((unsigned char) ((((/* implicit */int) (signed char)1)) == (((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_5 = 3; i_5 < 19; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) -8594690493307147044LL)))));
                                arr_24 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (signed char)50))) ? ((-2147483647 - 1)) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (unsigned char)193)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_2)) ^ ((~(((/* implicit */int) var_6))))))));
                                var_18 = ((/* implicit */signed char) ((unsigned short) 2781653347U));
                                var_19 = ((/* implicit */long long int) ((((_Bool) (unsigned char)70)) ? (((/* implicit */int) ((signed char) (signed char)-123))) : (((/* implicit */int) ((unsigned char) var_3)))));
                                arr_33 [i_0] [i_8] [i_9] [i_9] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) & (((long long int) var_9))));
                                var_20 = ((/* implicit */unsigned int) var_11);
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) var_10)))));
                    var_21 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) 0ULL)))));
                }
                for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 4) 
                {
                    arr_37 [i_0] [i_0] [4] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_11)) ? (676895867087779495ULL) : (((/* implicit */unsigned long long int) 255LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    var_22 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_10))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) ((33554431U) >> (((var_5) - (749592626U)))))));
    var_24 = ((unsigned int) var_8);
    var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)-85))));
}
