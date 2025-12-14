/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119576
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */short) ((((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)129)), (11456576803062187768ULL)))) << ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1240604110U)))))))));
                        var_14 = ((/* implicit */_Bool) (~(((long long int) (+(16777215))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) 0LL))));
                        arr_16 [i_2] [i_2] [i_2] [17U] [i_2] [i_2] = ((/* implicit */unsigned char) ((short) -1925864084));
                        arr_17 [i_2] = ((/* implicit */unsigned short) (-2147483647 - 1));
                    }
                    var_16 = ((unsigned long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) 3866879697U)), (11005780531977967201ULL))));
                    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) max((1240604110U), (3054363186U))))), (max(((((_Bool)1) ? (16777215) : (((/* implicit */int) (unsigned short)35177)))), (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */int) (unsigned short)35177)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)508)) > (((/* implicit */int) (short)24872))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((((unsigned long long int) max((3551287400852874311LL), (((/* implicit */long long int) 7936))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned short)42765)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (15872U)))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_7 = 2; i_7 < 9; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 2; i_8 < 9; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_29 [i_9] [i_9] [i_6] [i_9] [i_9] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-15720))))) ? (max((-1506654584093089231LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1240604109U)))))), (((/* implicit */long long int) ((unsigned char) 18446744073709551615ULL)))));
                                var_20 |= ((/* implicit */unsigned char) ((unsigned int) (+(((long long int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned char) (+(((/* implicit */int) (((-(15872U))) != (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))));
                    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 511ULL)) ? (46096094687387912LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))), (0ULL)));
                }
                var_23 += ((/* implicit */int) max((max((((/* implicit */long long int) (_Bool)1)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -471793219)))))), (((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1)))))))));
                arr_30 [i_6] = ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) (unsigned char)171)) ? (511ULL) : (((/* implicit */unsigned long long int) 4126640447579566347LL))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) 69805794224242688LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 4294967295U))))))));
}
