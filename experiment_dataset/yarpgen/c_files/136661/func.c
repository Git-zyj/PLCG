/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136661
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
    var_11 *= ((/* implicit */unsigned char) (((((~(((/* implicit */int) (short)6220)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)202)) == (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42539)) << (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] = ((unsigned long long int) ((6588749411117423725LL) >> (((((/* implicit */int) (unsigned char)228)) - (217)))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_2] [i_1] [i_0]))) < (((3055509423U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))))))))));
                                arr_17 [(signed char)1] [(signed char)1] [(signed char)1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned short) min((((var_7) >= (var_1))), (arr_15 [i_1 - 3] [i_4])))))));
                            }
                        } 
                    } 
                } 
                var_15 = (_Bool)1;
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 4; i_6 < 12; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) < (((/* implicit */int) var_0))))) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5] [(unsigned short)20] [i_5 - 1] [i_5] [i_5 - 1] [i_7])) && (((/* implicit */_Bool) arr_12 [6U] [i_6] [i_7] [19ULL] [i_6] [i_6]))))))))));
                            var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-29))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (741431470))))) : (arr_2 [i_5 - 1])))));
                            arr_29 [i_6] [i_6] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (short)32767))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
