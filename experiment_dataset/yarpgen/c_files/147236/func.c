/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147236
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
    var_12 = ((/* implicit */short) max((var_12), ((short)27610)));
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                var_15 = ((/* implicit */unsigned short) (-(-1278370032)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [(unsigned short)4] |= ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (((unsigned long long int) 0LL))))));
        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)1329))));
        /* LoopSeq 3 */
        for (short i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            var_17 = -1278370023;
            arr_13 [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) -12LL))), (((int) arr_10 [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32746))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_18 *= ((/* implicit */unsigned short) 0U);
            var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)6601)), (7LL)));
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                var_20 = ((/* implicit */short) (unsigned short)41081);
                var_21 *= ((/* implicit */_Bool) arr_10 [i_6]);
                var_22 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) (unsigned char)0)));
                arr_22 [i_2] [i_6] [i_6] |= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)6601)) <= (-1278370029)))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
            }
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                var_23 = ((min(((-(6803701666916918896ULL))), (((/* implicit */unsigned long long int) ((-8LL) | (-9LL)))))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (0)))));
                arr_25 [i_2] [i_2] [i_7] = ((/* implicit */long long int) (+(2475564546U)));
            }
        }
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)6601)))))));
    }
}
