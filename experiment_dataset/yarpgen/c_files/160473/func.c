/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160473
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_0)) ^ (min((0ULL), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((unsigned char)56), (((/* implicit */unsigned char) var_6))))), (((((/* implicit */int) (unsigned char)171)) ^ (((/* implicit */int) var_3))))))))))));
                            var_17 = ((/* implicit */long long int) ((7294257898040734548ULL) != (((/* implicit */unsigned long long int) ((((var_15) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))) ? (var_11) : (((((/* implicit */int) var_9)) << (((((/* implicit */int) (unsigned short)32618)) - (32618))))))))));
                            var_18 += ((/* implicit */unsigned char) max(((~(2698461824U))), (((/* implicit */unsigned int) (_Bool)1))));
                            var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (1303121181)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 1083970729332137405LL)) : (11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62667)))))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned char) ((unsigned int) ((15963888687335161705ULL) ^ (((/* implicit */unsigned long long int) 1048064)))));
                var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (13305447169513596115ULL) : ((+(arr_5 [i_0] [i_1] [i_1 - 2])))))) ? (((((3ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2])) ^ (((/* implicit */int) var_3)))))));
                var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (((+((-(279275953455104ULL))))) * (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)521))))) : (max((((/* implicit */unsigned int) var_3)), (1596505473U))))))));
    var_24 ^= ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_25 ^= ((/* implicit */unsigned int) ((signed char) (+(1023LL))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned short) var_11);
                            var_27 = ((/* implicit */_Bool) (-(((int) (-(var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
