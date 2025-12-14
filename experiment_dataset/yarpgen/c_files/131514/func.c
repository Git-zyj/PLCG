/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131514
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
    var_11 = ((/* implicit */int) (unsigned char)248);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) ((long long int) (-(arr_6 [i_1] [i_1] [i_1 + 1]))));
            var_13 = min((3594051590922341152ULL), (((/* implicit */unsigned long long int) (~(arr_6 [i_1 - 1] [i_1] [i_1 + 2])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */int) 9LL);
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)129)), (2839515642U)));
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)50724), (((/* implicit */unsigned short) (unsigned char)241))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24))))))))));
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 23; i_4 += 2) 
            {
                {
                    arr_19 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) arr_9 [i_4])) ? ((~(-6LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (-6LL)))))) ? (((/* implicit */int) ((max((arr_4 [i_4]), (((/* implicit */unsigned long long int) var_8)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) max(((unsigned char)12), (((/* implicit */unsigned char) arr_3 [i_4 + 1])))))));
                    var_15 = 8826523244498712440LL;
                    var_16 = var_2;
                }
            } 
        } 
        var_17 = min((1890945754), (((/* implicit */int) (unsigned char)218)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned char) -73130650);
        var_19 = ((/* implicit */signed char) 3948084605251271179LL);
        var_20 = ((17ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5]))));
        arr_22 [i_5] = ((/* implicit */int) ((_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-105))))), (((((/* implicit */int) (unsigned char)15)) << (((1582417812497830656ULL) - (1582417812497830645ULL))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(var_3))))))));
}
