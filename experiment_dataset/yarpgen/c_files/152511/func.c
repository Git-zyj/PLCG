/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152511
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min(((unsigned short)3853), (((/* implicit */unsigned short) (_Bool)0))))) ? (((((/* implicit */int) (unsigned short)39654)) / (((/* implicit */int) (unsigned short)61682)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)61683)) < (((/* implicit */int) (short)-31249))))))), (((/* implicit */int) max((((unsigned short) (short)8190)), ((unsigned short)61682))))));
                            arr_11 [i_0] [i_1] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65532))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)31249)))))))), (max(((unsigned short)61683), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -941195936)) || ((_Bool)1))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((signed char) ((min((-7487050868023877639LL), (((/* implicit */long long int) (signed char)108)))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)118))))));
                            arr_13 [i_0] = ((/* implicit */_Bool) max((((max((((/* implicit */unsigned int) (signed char)-108)), (1618923766U))) % (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))), (((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)118)) / (511653970))), (((/* implicit */int) (signed char)-60)))))));
                        }
                    } 
                } 
                arr_14 [3LL] [i_0] [i_1] = ((/* implicit */short) max((((long long int) (unsigned short)4)), (((/* implicit */long long int) ((1019587871U) ^ (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (0U)))))))));
            }
        } 
    } 
    var_11 = (_Bool)0;
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((unsigned long long int) (_Bool)0)) == (((/* implicit */unsigned long long int) max((5593792811674243794LL), (((/* implicit */long long int) (_Bool)1)))))))), (((((-5183928916976394210LL) / (((/* implicit */long long int) 584194405)))) / (((/* implicit */long long int) (-(((/* implicit */int) (signed char)30)))))))));
    var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (((((long long int) (unsigned short)3853)) & (((/* implicit */long long int) -458888826))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((max((777662377U), (((/* implicit */unsigned int) (_Bool)1)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)123)) == (((/* implicit */int) (short)32767)))))))) <= (((/* implicit */unsigned int) ((((/* implicit */int) ((short) (short)(-32767 - 1)))) - (((/* implicit */int) ((unsigned short) -781087118)))))))))));
}
