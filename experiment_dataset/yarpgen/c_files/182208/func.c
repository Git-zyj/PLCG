/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182208
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [(signed char)22] [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (signed char)56)), (15872U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) <= (4294951406U)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) (unsigned char)1)))), ((+(((/* implicit */int) (short)-17528)))))) ^ (((/* implicit */int) var_7))));
                            var_21 = ((/* implicit */unsigned long long int) (short)16799);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16800)) ? (((/* implicit */int) (unsigned short)8756)) : (((/* implicit */int) (unsigned char)255))))), (var_1)));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (short)-16799))));
                                var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8777)) ? (-676962095) : (-1)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (short)23499)))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (1345410803U)));
}
