/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146215
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) ((unsigned int) var_2));
                                arr_11 [i_0] [i_4] [i_4] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((-(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)194))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-50))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)62))))) : (((long long int) var_5))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (1194736782)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4)))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (845627342U) : (((/* implicit */unsigned int) -1225700743)))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_1)))))) : (((/* implicit */int) ((unsigned short) var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            arr_27 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) var_1);
                            arr_28 [i_7] [(signed char)3] [i_7] [i_7] = ((/* implicit */unsigned short) ((int) (-((~(-1))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            {
                                arr_38 [i_7] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] = ((/* implicit */signed char) ((var_0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (signed char)-104)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (unsigned short)49661)) : (var_10)))))));
                                var_14 = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    for (unsigned short i_15 = 3; i_15 < 16; i_15 += 2) 
                    {
                        {
                            arr_45 [i_7] [i_15 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) var_7)))) ? (((var_2) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned short) var_10))))) : ((-(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                            arr_46 [i_7 - 1] [i_7 - 1] [i_14] [i_7] = ((/* implicit */unsigned char) var_0);
                            arr_47 [i_8] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_3)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)57344)) : (1753731855))))) : (((/* implicit */int) var_0)))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_3))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))));
                            var_17 = ((/* implicit */short) ((unsigned int) 36402080U));
                            arr_54 [i_7] [i_7] [i_7] [i_7] [i_16] [i_7] = ((/* implicit */short) ((unsigned int) var_4));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_18 = 3; i_18 < 19; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 20; i_20 += 2) 
                        {
                            {
                                arr_63 [i_7 - 1] [i_8] [15LL] [i_19] [i_7] = (-(((((/* implicit */_Bool) (unsigned short)39938)) ? ((-(((/* implicit */int) (unsigned char)208)))) : (((int) var_9)))));
                                arr_64 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_9))))) ? (((unsigned int) var_0)) : (((unsigned int) ((_Bool) (unsigned short)15882)))));
                                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
