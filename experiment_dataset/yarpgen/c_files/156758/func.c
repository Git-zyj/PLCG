/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156758
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
    var_15 |= (short)(-32767 - 1);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned int) (short)(-32767 - 1));
        arr_2 [i_0] = ((/* implicit */short) 3927079080827733262ULL);
        var_17 = ((/* implicit */unsigned short) (unsigned char)15);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_5 [(unsigned short)10] &= ((/* implicit */unsigned char) (signed char)(-127 - 1));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                arr_9 [i_0] = ((/* implicit */int) (_Bool)0);
                var_18 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                arr_10 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (short)32758);
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                arr_15 [i_0] [i_3] [i_3] [i_0] |= ((/* implicit */unsigned short) (short)8556);
                arr_16 [i_3] [i_3] &= ((/* implicit */unsigned int) -6862647704488600422LL);
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 1) 
            {
                arr_19 [i_0] [i_1] = ((/* implicit */int) (short)32753);
                arr_20 [i_0] [i_1] [i_0] = (short)-32756;
            }
        }
        for (int i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            var_19 = ((/* implicit */short) (_Bool)1);
            var_20 = ((/* implicit */signed char) (short)-8555);
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) (short)-15374);
    }
    var_21 = ((/* implicit */int) (unsigned char)246);
}
