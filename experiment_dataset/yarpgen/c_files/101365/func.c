/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101365
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
    var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)21519));
        arr_3 [i_0] = ((/* implicit */signed char) var_2);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)224)) + (((/* implicit */int) (unsigned char)202))));
    }
    var_12 -= ((/* implicit */unsigned char) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_13 [0ULL] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(70368743915520ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 16512854645447166316ULL)))) : (1411919962872008629LL)));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-5193)) : (((/* implicit */int) (signed char)-85))))));
        arr_15 [(unsigned short)5] [1ULL] = ((/* implicit */unsigned short) (+(3335664820U)));
        var_14 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)53))));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_18 [(short)6] = ((/* implicit */unsigned int) ((short) -8462702209849612060LL));
        var_15 ^= ((/* implicit */short) (_Bool)1);
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
    {
        arr_21 [i_5] = min((max((((/* implicit */unsigned int) (short)-8192)), (2032404767U))), (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_0))))))));
        arr_22 [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((_Bool) (unsigned char)34)))))));
        arr_23 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)17198)), ((-((+(1718445580U)))))));
    }
    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1597939490U)))))) : (((unsigned int) (short)-32763))));
        var_17 = min((((long long int) (~(((/* implicit */int) (short)-28455))))), (-9223372036854775799LL));
        arr_26 [i_6 + 1] = ((((/* implicit */long long int) (+(3335664821U)))) % (((long long int) 3335664821U)));
    }
}
