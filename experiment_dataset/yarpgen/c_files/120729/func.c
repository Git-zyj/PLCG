/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120729
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
    var_16 += ((/* implicit */int) (unsigned short)27407);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((3331841927U) / (3331841927U))) <= (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [i_0] [6U] [i_3])) > (((/* implicit */int) arr_2 [i_0] [i_3]))))) * (((((/* implicit */int) (signed char)108)) << (((5020519804131602452LL) - (5020519804131602428LL)))))))))))));
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) || (((/* implicit */_Bool) 3331841927U)))))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19611))) ^ (-5020519804131602422LL))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)99)), ((unsigned short)60180)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 438399506884045441LL)))))) : (((arr_0 [i_0] [i_3]) / (((/* implicit */long long int) arr_1 [i_0] [i_2]))))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)99)) ? (-5020519804131602453LL) : (((/* implicit */long long int) 960459190U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((-5020519804131602452LL) % (((/* implicit */long long int) ((-1601595941) / (((/* implicit */int) (unsigned char)99)))))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((271918880979047287LL) | (((/* implicit */long long int) 963125352U)))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29247))) * (2190610038U))))))) ? ((-(7406768046827969496ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3334508136U)) && (((/* implicit */_Bool) ((15LL) ^ (-9025456228467949550LL))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) (short)1024);
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((2025470760) <= (((/* implicit */int) (unsigned short)5366)))))));
                                arr_25 [i_2] [i_1 - 1] [i_2] [i_7] [i_8] [i_0] = ((/* implicit */int) arr_8 [i_1] [(_Bool)0]);
                                arr_26 [i_2] [i_0] [0U] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 1568564432U)) | (((3958046805002143561LL) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)65535)))))))));
                                var_23 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)19611))))), (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49006))))))) % (((/* implicit */long long int) arr_22 [i_8] [i_7] [i_2] [i_2] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((1568564432U), ((~(((1568564420U) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
}
