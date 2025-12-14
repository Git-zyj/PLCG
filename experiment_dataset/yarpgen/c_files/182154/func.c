/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182154
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)245)) < (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_17 = ((((((/* implicit */int) (unsigned char)6)) * (((/* implicit */int) (unsigned char)250)))) << (((min((((/* implicit */unsigned long long int) (unsigned char)249)), (9187343239835811840ULL))) - (242ULL))));
                            arr_9 [i_1] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)5), ((unsigned char)255)))) ^ (((/* implicit */int) (unsigned char)0))));
                            arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((min((max((9259400833873739775ULL), (((/* implicit */unsigned long long int) 431857417716998031LL)))), (max((9187343239835811835ULL), (((/* implicit */unsigned long long int) (signed char)-33)))))) - (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)4)))))))));
                            var_18 = (-((+(((/* implicit */int) (unsigned char)1)))));
                            var_19 = ((/* implicit */short) max(((~(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)0)))))), (((/* implicit */long long int) (!(((431857417716998029LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        for (unsigned char i_5 = 3; i_5 < 14; i_5 += 1) 
        {
            {
                arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 2] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned char)245))))));
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)54577)) % (((/* implicit */int) (signed char)-33))))))), (9259400833873739776ULL)));
            }
        } 
    } 
}
